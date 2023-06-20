//
//  WSClient.h
//  testsocket
//
//  Created by 王世林 on 2023/6/16.
//

#import <Foundation/Foundation.h>
@interface WSClient : NSObject

+ (instancetype)shareManager;

- (void)initWebSocket;
@end
