//
//  main.m
//  testsocket
//
//  Created by 王世林 on 2023/6/16.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"
#import "WSClient.h"
int main(int argc, char * argv[]) {
    NSString * appDelegateClassName;
    @autoreleasepool {
        // Setup code that might create autoreleased objects goes here.
        appDelegateClassName = NSStringFromClass([AppDelegate class]);
    }
    return UIApplicationMain(argc, argv, nil, appDelegateClassName);
    return 0;
}
