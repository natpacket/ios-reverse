//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLivePrecheckResultItem : NSObject
{
    _Bool _isFail;
    _Bool _isRealname;
    _Bool _cannotJumpVerify;
    NSString *_title;
    NSString *_desc;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool cannotJumpVerify; // @synthesize cannotJumpVerify=_cannotJumpVerify;
@property(nonatomic) _Bool isRealname; // @synthesize isRealname=_isRealname;
@property(nonatomic) _Bool isFail; // @synthesize isFail=_isFail;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end
