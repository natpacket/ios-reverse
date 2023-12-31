//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMUIViewController;
@protocol MMTListTableViewContext;

@interface MMTListSectionController : NSObject
{
    _Bool _isFirstSection;
    _Bool _isLastSection;
    MMUIViewController *_viewController;
    id <MMTListTableViewContext> _tableViewContext;
    long long _section;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isLastSection; // @synthesize isLastSection=_isLastSection;
@property(nonatomic) _Bool isFirstSection; // @synthesize isFirstSection=_isFirstSection;
@property(nonatomic) long long section; // @synthesize section=_section;
@property(nonatomic) __weak id <MMTListTableViewContext> tableViewContext; // @synthesize tableViewContext=_tableViewContext;
@property(nonatomic) __weak MMUIViewController *viewController; // @synthesize viewController=_viewController;
- (void)onExposeItem:(id)arg1 indexPath:(id)arg2;
- (id)objectForIndexPath:(id)arg1;
- (void)didUpdateToObject:(id)arg1;
- (void)didSelectRowAtIndex:(long long)arg1;
- (void)didDisplayCell:(id)arg1 forRowAtIndex:(long long)arg2;
- (void)willDisplayCell:(id)arg1 forRowAtIndex:(long long)arg2;
- (id)cellForItemAtIndex:(long long)arg1 section:(long long)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)viewForFooter;
- (id)viewForHeader;
- (double)heightForFooter;
- (double)heightForHeader;
- (double)heightForRowAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)init;

@end

