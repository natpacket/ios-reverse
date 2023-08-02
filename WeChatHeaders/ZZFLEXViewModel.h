//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol ZZFLEXViewModelDelegate;

@interface ZZFLEXViewModel : NSObject
{
    id _dataModel;
    Class _viewClass;
    id <ZZFLEXViewModelDelegate> _vmDelegate;
    NSString *_reuseIdentifier;
    long long _viewTag;
    CDUnknownBlockType _eventAction;
    id _delegate;
    CDUnknownBlockType _selectedAction;
    CDUnknownBlockType _configAction;
    struct CGSize _viewSize;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType configAction; // @synthesize configAction=_configAction;
@property(copy, nonatomic) CDUnknownBlockType selectedAction; // @synthesize selectedAction=_selectedAction;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType eventAction; // @synthesize eventAction=_eventAction;
@property(nonatomic) long long viewTag; // @synthesize viewTag=_viewTag;
@property(retain, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
@property(nonatomic) __weak id <ZZFLEXViewModelDelegate> vmDelegate; // @synthesize vmDelegate=_vmDelegate;
@property(nonatomic) Class viewClass; // @synthesize viewClass=_viewClass;
@property(retain, nonatomic) id dataModel; // @synthesize dataModel=_dataModel;
@property(nonatomic) struct CGSize viewSize; // @synthesize viewSize=_viewSize;
- (void)updateViewSize;
- (id)initWithViewClass:(Class)arg1 reuseIdentifier:(id)arg2 vmDelegate:(id)arg3 dataModel:(id)arg4 viewSize:(struct CGSize)arg5 viewTag:(long long)arg6;
- (id)initWithViewClass:(Class)arg1 reuseIdentifier:(id)arg2 vmDelegate:(id)arg3 dataModel:(id)arg4 viewTag:(long long)arg5;
- (id)initWithViewClass:(Class)arg1 vmDelegate:(id)arg2 dataModel:(id)arg3;
- (id)initWithViewClass:(Class)arg1 vmDelegate:(id)arg2;
- (void)excuteSelectedActionForHostView:(id)arg1;
- (void)excuteConfigActionForHostView:(id)arg1 itemView:(id)arg2 sectionCount:(long long)arg3 indexPath:(id)arg4;
- (struct CGSize)visableSizeForHostView:(id)arg1 angel:(id)arg2 sectionInsets:(struct UIEdgeInsets)arg3;

@end
