//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableString;

@interface WePkgFacadeJsExpr : NSObject
{
    NSMutableString *_jsScript;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableString *jsScript; // @synthesize jsScript=_jsScript;
- (void)appendString:(id)arg1;
- (void)jsVar:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)timeFromDomLoadingExpr;
- (id)safeAccessSubVarExpr:(id)arg1;
- (void)createIntermediateObjectIfNeed:(id)arg1;
- (id)init;

@end

