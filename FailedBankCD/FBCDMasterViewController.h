//
//  FBCDMasterViewController.h
//  FailedBankCD
//
//  Created by Uwe Stahl on 09.08.13.
//
//

#import <UIKit/UIKit.h>

@interface FBCDMasterViewController : UITableViewController
@property (nonatomic,strong) NSManagedObjectContext* managedObjectContext;
@property (nonatomic, strong) NSArray *failedBankInfos;

@end
