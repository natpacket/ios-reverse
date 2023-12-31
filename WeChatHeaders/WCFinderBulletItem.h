//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WCFinderBulletCommentInfo, WCFinderBulletItemTextView;

@interface WCFinderBulletItem : NSObject
{
    _Bool _locale;
    NSString *_text;
    id _extension;
    WCFinderBulletCommentInfo *_commentInfo;
    double _appearPoint;
    double _length;
    double _showedPoint;
    double _disappearPoint;
    WCFinderBulletItemTextView *_textView;
}

+ (unsigned long long)timeRangeIndexInPoint:(double)arg1;
+ (double)timeRange;
- (void).cxx_destruct;
@property(nonatomic) __weak WCFinderBulletItemTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) _Bool locale; // @synthesize locale=_locale;
@property(nonatomic) double disappearPoint; // @synthesize disappearPoint=_disappearPoint;
@property(nonatomic) double showedPoint; // @synthesize showedPoint=_showedPoint;
@property(nonatomic) double length; // @synthesize length=_length;
@property(nonatomic) double appearPoint; // @synthesize appearPoint=_appearPoint;
@property(retain, nonatomic) WCFinderBulletCommentInfo *commentInfo; // @synthesize commentInfo=_commentInfo;
@property(retain, nonatomic) id extension; // @synthesize extension=_extension;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (unsigned long long)timeRangeIndex;

@end

