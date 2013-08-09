//
//  FBCDDetailViewController.h
//  FailedBankCD
//
//  Created by Uwe Stahl on 09.08.13.
//
//

#import <UIKit/UIKit.h>

@interface FBCDDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
