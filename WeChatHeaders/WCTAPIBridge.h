//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WCTAPIBridge : NSObject
{
}

+ (void)configTraditionalChineseDict:(id)arg1;
+ (void)configPinyinDict:(id)arg1;
+ (void)configDefaultSymbolDetectorAndUnicodeNormalizer;
+ (id)extractMultiObjectOnResultColumns:(id)arg1 fromHandleStatement:(struct CPPHandleStatement)arg2;
+ (id)extractObjectOnResultColumns:(id)arg1 fromHandleStatement:(struct CPPHandleStatement)arg2;
+ (void)bindProperty:(id)arg1 ofObject:(id)arg2 toIndex:(int)arg3 withHandleStatement:(struct CPPHandleStatement)arg4;
+ (void)bindProperties:(id)arg1 ofObject:(id)arg2 withHandleStatement:(struct CPPHandleStatement)arg3;
+ (_Bool)insertObjects:(id)arg1 intoTable:(id)arg2 withProperties:(id)arg3 orReplace:(_Bool)arg4 orIgnore:(_Bool)arg5 withHandle:(struct CPPHandle)arg6;
+ (_Bool)createVirtualTable:(id)arg1 withClass:(Class)arg2 withHandle:(struct CPPHandle)arg3;
+ (_Bool)createTable:(id)arg1 withClass:(Class)arg2 withHandle:(struct CPPHandle)arg3;

@end

