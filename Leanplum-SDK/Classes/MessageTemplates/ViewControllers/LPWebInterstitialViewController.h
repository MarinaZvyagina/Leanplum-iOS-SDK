//
//  LPWebInterstitialViewController.h
//  LeanplumSDK-iOS
//
//  Created by Milos Jakovljevic on 03/04/2020.
//  Copyright © 2020 Leanplum. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Leanplum.h"

NS_ASSUME_NONNULL_BEGIN

@interface LPWebInterstitialViewController : UIViewController <WKNavigationDelegate>

@property (strong, nonatomic) LPActionContext *context;

@property (weak, nonatomic) IBOutlet UIButton *dismissButton;

+(nullable LPWebInterstitialViewController *)instantiateFromStoryboard;

@end

NS_ASSUME_NONNULL_END
