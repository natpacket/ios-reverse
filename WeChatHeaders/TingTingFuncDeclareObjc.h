//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TingTingFuncDeclare-Protocol.h"

@class NSString;

@interface TingTingFuncDeclareObjc : NSObject <TingTingFuncDeclare>
{
    CDUnknownBlockType _TingReportContext_TingReportContext_Block;
    CDUnknownBlockType _Void_Bool_Block;
    CDUnknownBlockType _Void_Empty_Block;
    CDUnknownBlockType _Void_TingRGBAImageData_Block;
}

+ (CDUnknownBlockType)to_Void_TingRGBAImageData_Block:(id)arg1;
+ (id)from_Void_TingRGBAImageData_Block:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)to_Void_Empty_Block:(id)arg1;
+ (id)from_Void_Empty_Block:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)to_Void_Bool_Block:(id)arg1;
+ (id)from_Void_Bool_Block:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)to_TingReportContext_TingReportContext_Block:(id)arg1;
+ (id)from_TingReportContext_TingReportContext_Block:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType Void_TingRGBAImageData_Block; // @synthesize Void_TingRGBAImageData_Block=_Void_TingRGBAImageData_Block;
@property(readonly, copy, nonatomic) CDUnknownBlockType Void_Empty_Block; // @synthesize Void_Empty_Block=_Void_Empty_Block;
@property(readonly, copy, nonatomic) CDUnknownBlockType Void_Bool_Block; // @synthesize Void_Bool_Block=_Void_Bool_Block;
@property(readonly, copy, nonatomic) CDUnknownBlockType TingReportContext_TingReportContext_Block; // @synthesize TingReportContext_TingReportContext_Block=_TingReportContext_TingReportContext_Block;
- (void)Void_TingRGBAImageData:(id)arg1;
- (void)Void_Empty;
- (void)Void_Bool:(_Bool)arg1;
- (id)TingReportContext_TingReportContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
