//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CameraScanGoodsAdInfo, CameraScanGoodsJSAPIInfo, NSString;

@interface CameraScanViewControllerOpenParams : NSObject
{
    _Bool _bHideMyQRCodeBtn;
    _Bool _bHideAlbumBtn;
    _Bool _bHideTorchButton;
    NSString *_descStr;
    CameraScanGoodsAdInfo *_adInfo;
    CameraScanGoodsJSAPIInfo *_jsapiInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CameraScanGoodsJSAPIInfo *jsapiInfo; // @synthesize jsapiInfo=_jsapiInfo;
@property(retain, nonatomic) CameraScanGoodsAdInfo *adInfo; // @synthesize adInfo=_adInfo;
@property(copy, nonatomic) NSString *descStr; // @synthesize descStr=_descStr;
@property(nonatomic) _Bool bHideTorchButton; // @synthesize bHideTorchButton=_bHideTorchButton;
@property(nonatomic) _Bool bHideAlbumBtn; // @synthesize bHideAlbumBtn=_bHideAlbumBtn;
@property(nonatomic) _Bool bHideMyQRCodeBtn; // @synthesize bHideMyQRCodeBtn=_bHideMyQRCodeBtn;

@end

