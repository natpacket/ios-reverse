//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FinderLiveNoticeInfo, FinderLivePromoteInfoListWecomContact;

@interface MMFinderLivePromoteInfoAvailableItem : NSObject
{
    unsigned int _type;
    unsigned int _businessType;
    unsigned int _isAvailable;
    FinderLiveNoticeInfo *_noticeInfo;
    FinderLivePromoteInfoListWecomContact *_wecomContact;
}

+ (id)createAnchorPromoteAvailableItemFrom:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FinderLivePromoteInfoListWecomContact *wecomContact; // @synthesize wecomContact=_wecomContact;
@property(retain, nonatomic) FinderLiveNoticeInfo *noticeInfo; // @synthesize noticeInfo=_noticeInfo;
@property(nonatomic) unsigned int isAvailable; // @synthesize isAvailable=_isAvailable;
@property(nonatomic) unsigned int businessType; // @synthesize businessType=_businessType;
@property(nonatomic) unsigned int type; // @synthesize type=_type;

@end

