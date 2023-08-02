//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class NSString, UIView, WCCardDataCardInfo, WCCardDataCardTPInfo;
@protocol WCCardDataSource, WCCardDetailPageCodeCellViewDelegate;

@interface WCCardDetailPageCodeCellView : MMUIView
{
    WCCardDataCardTPInfo *_cardTpInfo;
    WCCardDataCardInfo *_cardInfo;
    id <WCCardDataSource> _cardDataSource;
    UIView *_codeContainView;
    id <WCCardDetailPageCodeCellViewDelegate> _delegate;
    int _fixPadding;
    NSString *_tipsWording;
    NSString *_reasonWording;
    struct CGRect _oldFrame;
    NSString *_buttonWording;
    unsigned int _offlineCodeStatus;
    NSString *_dynamicCode;
    NSString *_dynamicOfflineCode;
}

+ (double)heightForCardSource:(id)arg1 viewWidth:(double)arg2 offlineCode:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) unsigned int offlineCodeStatus; // @synthesize offlineCodeStatus=_offlineCodeStatus;
@property(retain, nonatomic) NSString *dynamicOfflineCode; // @synthesize dynamicOfflineCode=_dynamicOfflineCode;
@property(retain, nonatomic) NSString *dynamicCode; // @synthesize dynamicCode=_dynamicCode;
- (void)codeViewTapped:(id)arg1;
- (void)acceptButtonDidClicked;
- (void)refreshCode;
- (void)showErrorView;
- (void)dealloc;
- (void)updateViewStatus;
- (void)refresh:(id)arg1;
- (id)genDataMatrixWithQrLevel:(id)arg1 cardCode:(id)arg2;
- (id)getCodeViewWithCode:(id)arg1;
- (id)getBlurCodeView;
- (id)createCodeNumView:(id)arg1;
- (void)doDisableCodeLogic;
- (void)setupView;
- (void)initView;
- (id)initWithViewWidth:(double)arg1 cardSource:(id)arg2 delegate:(id)arg3 dynamicCode:(id)arg4 offlineCode:(id)arg5 offlineCodeStatus:(unsigned int)arg6;

@end

