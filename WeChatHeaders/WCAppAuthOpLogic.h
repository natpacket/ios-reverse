//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@protocol WCAppAuthOpLogicDelegate;

@interface WCAppAuthOpLogic : MMObject <PBMessageObserverDelegate>
{
    id <WCAppAuthOpLogicDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCAppAuthOpLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleDelResp:(id)arg1;
- (void)handleModResp:(id)arg1;
- (_Bool)deleteApp:(id)arg1 scene:(unsigned int)arg2;
- (_Bool)modifyApp:(id)arg1 scope:(id)arg2 Scene:(unsigned int)arg3;
- (_Bool)modifyAppAllScope:(id)arg1 Scene:(unsigned int)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

