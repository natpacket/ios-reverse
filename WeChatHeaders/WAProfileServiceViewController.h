//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZZFLEXCollectionViewController.h"

@class GetProfileInfoResponse_RelievedBuyInfo, UIView, WAProfileServiceHeaderView;

@interface WAProfileServiceViewController : ZZFLEXCollectionViewController
{
    GetProfileInfoResponse_RelievedBuyInfo *_buyInfo;
    WAProfileServiceHeaderView *_headerView;
    UIView *_halfAdapterHeaderView;
    CDUnknownBlockType _halfAdapterCloseAction;
}

+ (double)viewHeightByBuyInfo:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType halfAdapterCloseAction; // @synthesize halfAdapterCloseAction=_halfAdapterCloseAction;
@property(retain, nonatomic) UIView *halfAdapterHeaderView; // @synthesize halfAdapterHeaderView=_halfAdapterHeaderView;
@property(retain, nonatomic) WAProfileServiceHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) GetProfileInfoResponse_RelievedBuyInfo *buyInfo; // @synthesize buyInfo=_buyInfo;
- (id)halfAdapterHeaderWithCloseAction:(CDUnknownBlockType)arg1;
- (void)reloadUI;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithBuyInfo:(id)arg1;

@end

