//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSMutableArray, NSString, UIButton, UITextField;

@interface WXGRoamRemoteConfigViewController : MMUIViewController <UITextFieldDelegate>
{
    NSString *path;
    UITextField *_deviceText;
    UITextField *_domainText;
    UITextField *_portText;
    UITextField *_ticketText;
    UIButton *_saveBtn;
    UIButton *_deleteBtn;
    NSMutableArray *_textArr;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *textArr; // @synthesize textArr=_textArr;
@property(retain, nonatomic) UIButton *deleteBtn; // @synthesize deleteBtn=_deleteBtn;
@property(retain, nonatomic) UIButton *saveBtn; // @synthesize saveBtn=_saveBtn;
@property(retain, nonatomic) UITextField *ticketText; // @synthesize ticketText=_ticketText;
@property(retain, nonatomic) UITextField *portText; // @synthesize portText=_portText;
@property(retain, nonatomic) UITextField *domainText; // @synthesize domainText=_domainText;
@property(retain, nonatomic) UITextField *deviceText; // @synthesize deviceText=_deviceText;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onDelete;
- (void)onSave;
- (_Bool)deleteCache;
- (_Bool)saveTextToCache;
- (void)getTextCache;
- (void)setupMainView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

