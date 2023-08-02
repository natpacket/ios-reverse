//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FWFUIScrollViewHostApi-Protocol.h"

@class FWFInstanceManager;

@interface FWFScrollViewHostApiImpl : NSObject <FWFUIScrollViewHostApi>
{
    FWFInstanceManager *_instanceManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FWFInstanceManager *instanceManager; // @synthesize instanceManager=_instanceManager;
- (void)setContentOffsetForScrollViewWithIdentifier:(id)arg1 toX:(id)arg2 y:(id)arg3 error:(id *)arg4;
- (void)scrollByForScrollViewWithIdentifier:(id)arg1 x:(id)arg2 y:(id)arg3 error:(id *)arg4;
- (id)contentOffsetForScrollViewWithIdentifier:(id)arg1 error:(id *)arg2;
- (void)createFromWebViewWithIdentifier:(id)arg1 webViewIdentifier:(id)arg2 error:(id *)arg3;
- (id)scrollViewForIdentifier:(id)arg1;
- (id)initWithInstanceManager:(id)arg1;

@end
