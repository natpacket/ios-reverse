//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMsgExt-Protocol.h"

@class NSMutableDictionary;
@protocol TextStateNewXMLLogicDelegate;

@interface TextStateNewXMLLogic : NSObject <IMsgExt>
{
    id <TextStateNewXMLLogicDelegate> _delegate;
    NSMutableDictionary *_typeToHandlerMap;
}

+ (_Bool)isBypassChannelSupportedForType:(id)arg1;
+ (id)newXMLTypeList;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *typeToHandlerMap; // @synthesize typeToHandlerMap=_typeToHandlerMap;
@property(nonatomic) __weak id <TextStateNewXMLLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)initTextStatusIconConfigRefreshHandler;
- (void)initTextStatusCommentHandler;
- (void)initTextStatusLikeHandler;
- (void)initModTextStatusHandler;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)registerNewXMLType:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)initHandler;
- (void)initData;
- (id)init;

@end
