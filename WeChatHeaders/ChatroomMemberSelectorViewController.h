//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ContactSelectorViewController.h"

@class CContact, NSString;

@interface ChatroomMemberSelectorViewController : ContactSelectorViewController
{
    CContact *_chatroomContact;
    NSString *_customizedTitle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *customizedTitle; // @synthesize customizedTitle=_customizedTitle;
@property(readonly, nonatomic) CContact *chatroomContact; // @synthesize chatroomContact=_chatroomContact;
- (id)headerTitleInSection:(long long)arg1;
- (void)viewDidLoad;
- (void)loadTitle;
- (id)initWithChatroomContact:(id)arg1 selectedContacts:(id)arg2 filterHandler:(CDUnknownBlockType)arg3;
- (id)initWithChatroomContact:(id)arg1 selectedContacts:(id)arg2;

@end

