//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TPYYClassMethodInfo : NSObject
{
    struct objc_method *_method;
    NSString *_name;
    SEL _sel;
    CDUnknownFunctionPointerType _imp;
    NSString *_typeEncoding;
    NSString *_returnTypeEncoding;
    NSArray *_argumentTypeEncodings;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *argumentTypeEncodings; // @synthesize argumentTypeEncodings=_argumentTypeEncodings;
@property(readonly, nonatomic) NSString *returnTypeEncoding; // @synthesize returnTypeEncoding=_returnTypeEncoding;
@property(readonly, nonatomic) NSString *typeEncoding; // @synthesize typeEncoding=_typeEncoding;
@property(readonly, nonatomic) CDUnknownFunctionPointerType imp; // @synthesize imp=_imp;
@property(readonly, nonatomic) SEL sel; // @synthesize sel=_sel;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) struct objc_method *method; // @synthesize method=_method;
- (id)initWithMethod:(struct objc_method *)arg1;

@end

