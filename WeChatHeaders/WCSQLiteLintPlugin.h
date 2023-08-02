//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MatrixPlugin.h"

@protocol WCSQLiteLintDataSourceDelegate;

@interface WCSQLiteLintPlugin : MatrixPlugin
{
    id <WCSQLiteLintDataSourceDelegate> _deleagte;
}

+ (id)getTag;
- (void).cxx_destruct;
@property(nonatomic) __weak id <WCSQLiteLintDataSourceDelegate> deleagte; // @synthesize deleagte=_deleagte;
- (id)getReportDataFromIssue:(void *)arg1;
- (function_fdb5bcff)getSQLiteExcutionCallback;
- (function_ddadd5d5)getIssueCallback;
- (id)getStackInfo;
- (void)notifyExcution:(id)arg1 withCost:(double)arg2 onDB:(id)arg3;
- (_Bool)shouldCheck:(id)arg1 onDatabase:(id)arg2;
- (void)setWhiteList:(id)arg1 forDB:(id)arg2;
- (void)uninstallSQLiteLintOnDB:(id)arg1;
- (void)installSQLiteLintOnDB:(id)arg1;
- (id)init;

@end
