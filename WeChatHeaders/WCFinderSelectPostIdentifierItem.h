//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PrepareFinder, WCFinderContact;

@interface WCFinderSelectPostIdentifierItem : NSObject
{
    _Bool _selected;
    WCFinderContact *_contact;
    PrepareFinder *_prepare;
    NSString *_relatedUsername;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *relatedUsername; // @synthesize relatedUsername=_relatedUsername;
@property(retain, nonatomic) PrepareFinder *prepare; // @synthesize prepare=_prepare;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
- (id)checkLabelText;

@end

