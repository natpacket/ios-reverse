//
//  ViewController.m
//  testsocket
//
//  Created by 王世林 on 2023/6/16.
//

#import "ViewController.h"
#import "WSClient.h"
#import "FLSocketManager.h"

@interface ViewController ()

@property (nonatomic,strong)WSClient *client;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    NSLog(@"start connect!");
    /**
     *  @author 孔凡列, 16-09-21 08:09:06
     *
     *  开启连接
     */
    NSString *url = @"ws://192.168.0.38:8000/ws";
    [[FLSocketManager shareManager] fl_open:url connect:^{
        NSLog(@"成功连接");
    } receive:^(id message, FLSocketReceiveType type) {
        if (type == FLSocketReceiveTypeForMessage) {
            NSLog(@"接收 类型1--%@",message);
        }
        else if (type == FLSocketReceiveTypeForPong){
            NSLog(@"接收 类型2--%@",message);
        }
    } failure:^(NSError *error) {
        NSLog(@"连接失败");
    }];
//    self.client = [WSClient alloc];
//    [ self.client initWebSocket];
//    [[WSClient shareManager] initWebSocket];
    // Do any additional setup after loading the view.
}

- (void)viewWillDisappear:(BOOL)animated{
    [super viewWillDisappear:animated];
    [[FLSocketManager shareManager] fl_close:^(NSInteger code, NSString *reason, BOOL wasClean) {
        NSLog(@"code = %zd,reason = %@",code,reason);
    }];
}

- (void)touchesBegan:(NSSet<UITouch *> *)touches withEvent:(UIEvent *)event{
    [[FLSocketManager shareManager] fl_send:@"hello world"];
}


@end
