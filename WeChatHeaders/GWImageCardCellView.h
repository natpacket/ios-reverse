//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWHostBaseView.h"

@class NSString;

@interface GWImageCardCellView : GWHostBaseView
{
    _Bool _hidePlayBtn;
    _Bool _hideDesc;
    NSString *_coverImgUrl;
    NSString *_desc;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hideDesc; // @synthesize hideDesc=_hideDesc;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(nonatomic) _Bool hidePlayBtn; // @synthesize hidePlayBtn=_hidePlayBtn;
@property(copy, nonatomic) NSString *coverImgUrl; // @synthesize coverImgUrl=_coverImgUrl;
- (void)configureWithCellModel:(id)arg1;

@end

