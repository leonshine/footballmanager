//
//  MasterViewController.h
//  footballmanager
//
//  Created by shenhf on 13-11-22.
//  Copyright (c) 2013年 shenhf. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
