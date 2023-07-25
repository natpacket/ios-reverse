//
//  ViewController.m
//  testwechat
//
//  Created by natpacket on 2023/7/21.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController
static int i=1;
- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    UILabel *label = [[UILabel alloc] initWithFrame:CGRectMake(10, 10, 150, 40)];
   [label setText: [NSString stringWithFormat:@"Hello, this is view %d", i++]];
   [self.view addSubview:label];
}


@end
