//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMLiveFeedStreamTask, MMLiveTaskId;

@interface MMFinderLiveFeedStreamWidgetBaseView : UIView
{
    MMLiveTaskId *_taskId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMLiveTaskId *taskId; // @synthesize taskId=_taskId;
@property(readonly, nonatomic) MMLiveFeedStreamTask *liveTask;
- (void)prepareForReuse;

@end

