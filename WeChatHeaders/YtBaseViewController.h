//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@interface YtBaseViewController : UIViewController
{
    CDUnknownBlockType _succeedBlock;
    CDUnknownBlockType _failedBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType succeedBlock; // @synthesize succeedBlock=_succeedBlock;
- (id)YtCreateImageWithColor:(id)arg1;
- (void)quitViewController;
- (void)naviBack;
- (void)viewWillAppear:(_Bool)arg1;

@end

