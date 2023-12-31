//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class WCCardLayoutStorage;
@protocol WCCardLayoutMgrDelegate;

@interface WCCardLayoutMgr : MMObject <PBMessageObserverDelegate>
{
    WCCardLayoutStorage *_layoutStg;
    unsigned int _waitLocationTime;
    id <WCCardLayoutMgrDelegate> _delegate;
    _Bool _bGettingLayout;
}

- (void).cxx_destruct;
- (void)logHomePageList;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)saveLayoutStg;
- (id)GetPathOfWCCardLayoutStorage;
- (void)getCardLayoutByCGI:(id)arg1 Scene:(unsigned int)arg2;
- (unsigned int)getHomePageCardNum;
- (id)getMyCardPackageSvrRetEntryList;
- (id)getCardsPkgElementList;
- (id)getEntrySubTitle;
- (_Bool)isGettingLayout;
- (id)layoutTip;
- (_Bool)hasLayoutRedDot;
- (void)clearLayoutRedDot;
- (unsigned int)getTopScene;
- (id)getFirstList;
- (id)getLabelList;
- (id)getRecentList;
- (id)getNearByList;
- (id)getMemberCardList;
- (id)getExpiringList;
- (id)getLayoutBuff;
- (void)loadLayoutStg;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

