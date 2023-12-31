//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIColor, UIScrollView;
@protocol TingPageControlDelegate;

@interface TingPageControl : UIView
{
    id <TingPageControlDelegate> _delegate;
    long long _selectedIndex;
    unsigned long long _count;
    double _nodeSize;
    double _nodeSpacing;
    UIColor *_nodeColor;
    NSMutableArray *_nodeList;
    long long _siblingIndex;
    UIScrollView *_scrollView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) long long siblingIndex; // @synthesize siblingIndex=_siblingIndex;
@property(retain, nonatomic) NSMutableArray *nodeList; // @synthesize nodeList=_nodeList;
@property(retain, nonatomic) UIColor *nodeColor; // @synthesize nodeColor=_nodeColor;
@property(nonatomic) double nodeSpacing; // @synthesize nodeSpacing=_nodeSpacing;
@property(nonatomic) double nodeSize; // @synthesize nodeSize=_nodeSize;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) __weak id <TingPageControlDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reloadWithCount:(unsigned long long)arg1 selectedIndex:(unsigned long long)arg2;
- (void)setSelectedPageIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)updateSelectedIndexFor:(long long)arg1;
- (void)reloadNodeAtIndex:(long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)calcSize:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

