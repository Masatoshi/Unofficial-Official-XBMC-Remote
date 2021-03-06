//
//  RemoteController.h
//  XBMC Remote
//
//  Created by Giovanni Messina on 24/3/12.
//  Copyright (c) 2012 joethefox inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DSJSONRPC.h"
#import "VolumeSliderView.h"

@interface RemoteController : UIViewController <UITextFieldDelegate>{
    DSJSONRPC *jsonRPC;
    VolumeSliderView *volumeSliderView;
    IBOutlet UIView *remoteControlView;
    IBOutlet UILabel *subsInfoLabel;
    NSTimer *fadeoutTimer;
    IBOutlet UIView *quickHelpView;
    IBOutlet UIImageView *quickHelpImageView;
    UITextField *xbmcVirtualKeyboard;
    IBOutlet UIView *gestureZoneView;
    IBOutlet UIView *buttonZoneView;
    IBOutlet UIImageView *panFallbackImageView;
    int audioVolume;
    float lastRotation;
    float storeBrightness;
}

- (IBAction)startVibrate:(id)sender;
@property (strong, nonatomic) id detailItem;
@property (nonatomic, retain) NSTimer* holdVolumeTimer;
@property (strong, nonatomic) UIImageView *panFallbackImageView;

@end
