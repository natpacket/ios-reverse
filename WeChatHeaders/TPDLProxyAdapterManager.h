//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol TPDLProxyAdapterDelegate;

@interface TPDLProxyAdapterManager : NSObject
{
    id <TPDLProxyAdapterDelegate> mAdapter;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (long long)getOfflineRecordDurationWithVid:(id)arg1 format:(id)arg2;
- (id)getOfflineRecordVinfo:(id)arg1 withFormat:(id)arg2;
- (void)setAdapter:(id)arg1;
- (id)init;

@end

