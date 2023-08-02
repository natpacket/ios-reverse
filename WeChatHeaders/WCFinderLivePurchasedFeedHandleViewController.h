//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

@class MMUIButton, MMUILabel, NSString, UIColor, UIImageView, WCFinderDataItem;

@interface WCFinderLivePurchasedFeedHandleViewController : MMUIViewController
{
    _Bool _showTicket;
    int _scene;
    WCFinderDataItem *_dataItem;
    UIColor *_imageColor;
    UIImageView *_tipImageView;
    MMUILabel *_titleLabel;
    MMUIButton *_cancelButton;
    MMUIButton *_ticketButton;
    NSString *_titleText;
}

- (void).cxx_destruct;
@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) MMUIButton *ticketButton; // @synthesize ticketButton=_ticketButton;
@property(retain, nonatomic) MMUIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *tipImageView; // @synthesize tipImageView=_tipImageView;
@property(nonatomic) _Bool showTicket; // @synthesize showTicket=_showTicket;
@property(retain, nonatomic) UIColor *imageColor; // @synthesize imageColor=_imageColor;
@property(retain, nonatomic) WCFinderDataItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)ticketButtonClick;
- (void)cancelButtonClick;
- (void)layoutUI;
- (void)updateData;
- (void)onReturn;
- (void)createUI;
- (void)updateScene:(int)arg1 titleText:(id)arg2;
- (void)updateDataItem:(id)arg1;
- (void)viewDidLoad;

@end

