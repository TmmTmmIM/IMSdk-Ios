//
//  TMConversionLinkDao.swift
//  SDK
//
//  Created by oceanMAC on 2022/9/28.
//

import Foundation
import WCDBSwift

private let TM_CONVERSATION_LINK_TABLE_NAME = "USER_CONVERSATION_LINK_TABLE"

struct TMConversionLinkDao {
    
    static var `default` = TMConversionLinkDao()

    func createTable(database: Database) -> Promise<Void> {
        
        do {
            try database.create(table: TM_CONVERSATION_LINK_TABLE_NAME, of: TMConversionLinkModel.self)
            return Promise<Void>.resolve()

        } catch {
            return Promise<Void>.reject(TMNetworkingError.createCommonError())
        }
    }
    
    func insertChatId(chatId: String, aChatId: String) -> Promise<Bool> {
        
        guard let database = TMDatabaseUtil.default.base else {
            return Promise<Bool>.reject(TMNetworkingError.createCommonError())
        }
        let model = TMConversionLinkModel()
        model.aChatId = aChatId
        model.chatId = chatId
        
        do {
            try database.insert(objects: [model], intoTable: TM_CONVERSATION_LINK_TABLE_NAME)

            return Promise<Bool>.resolve(true)
        } catch  {

            if let errorMsg = error as? WCDBSwift.Error {
                if errorMsg.type == .sqlite, errorMsg.code.value == 19 {
                    return Promise<Bool>.resolve(true)
                }else {
                    return Promise<Bool>.reject(error)
                }
            }
            return Promise<Bool>.reject(error)
        }
    }
    
    func getChatId(aChatId: String) -> TMConversionLinkModel? {
        guard let database = TMDatabaseUtil.default.base else {
            return nil
        }
        
        let condion: Condition =
        TMConversionLinkModel.Properties.aChatId.in(aChatId)
        let result: [TMConversionLinkModel]? = try? database.getObjects(fromTable: TM_CONVERSATION_LINK_TABLE_NAME, where: condion)

        return result?.first
    }
}
