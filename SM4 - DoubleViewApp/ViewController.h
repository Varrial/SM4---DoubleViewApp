//
//  ViewController.h
//  SM4 - DoubleViewApp
//
//  Created by Gracjan Ulianowski on 22/11/2022.
//

#import <UIKit/UIKit.h>
#import "SecondViewController.h"

@interface ViewController : UIViewController <SecondViewControllerDelegate>

@property (nonatomic, weak) IBOutlet UILabel *messageLabel;
@property (nonatomic, weak) IBOutlet UITextField *inputField;
@property (nonatomic, weak) IBOutlet UITextField *surnameTextField;

@end

