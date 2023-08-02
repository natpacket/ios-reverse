//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class WCFinderSearchContactCellContentView, WCFinderSearchInfo;
@protocol WCFinderSearchContactCellDelegate;

@interface WCFinderSearchContactCell : UITableViewCell
{
    id <WCFinderSearchContactCellDelegate> _delegate;
    WCFinderSearchInfo *_searchInfo;
    WCFinderSearchContactCellContentView *_cellContentView;
}

+ (double)cellHeightWith:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderSearchContactCellContentView *cellContentView; // @synthesize cellContentView=_cellContentView;
@property(retain, nonatomic) WCFinderSearchInfo *searchInfo; // @synthesize searchInfo=_searchInfo;
@property(nonatomic) __weak id <WCFinderSearchContactCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getAttributeText:(id)arg1;
- (void)updateUIWith:(id)arg1 isShowSeparatorLine:(_Bool)arg2 shouldHideFollow:(_Bool)arg3 useRoundHeader:(_Bool)arg4;
- (void)prepareForReuse;
- (void)initSubview;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

