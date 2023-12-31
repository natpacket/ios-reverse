//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface WABasePickerViewModel : NSObject
{
    NSString *_headerText;
    NSArray *_items;
    NSArray *_currentSelectedIdx;
    double _contentMaxHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double contentMaxHeight; // @synthesize contentMaxHeight=_contentMaxHeight;
@property(retain, nonatomic) NSArray *currentSelectedIdx; // @synthesize currentSelectedIdx=_currentSelectedIdx;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
- (id)titleForRow:(long long)arg1 forComponent:(long long)arg2;
- (id)initWithItems:(id)arg1 currentSelectedIdx:(id)arg2;

@end

