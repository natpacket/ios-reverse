//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MLCGetSystemInfoImpl : NSObject
{
    id _context;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id context; // @synthesize context=_context;
- (id)systemTheme;
- (id)fillOneInfo:(id)arg1;
- (id)fillAppBaseInfo;
- (id)fillWindowInfo;
- (id)fillDeviceInfo;
- (void)copyInfo:(id)arg1 from:(id)arg2 to:(id)arg3;
- (void)makeWindowInfo:(id)arg1 result:(id)arg2;
- (id)fillAllInfo;
- (id)handleJSEvent:(id)arg1;

@end

