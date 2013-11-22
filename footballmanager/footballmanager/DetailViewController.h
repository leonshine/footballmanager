//
//  DetailViewController.h
//  footballmanager
//
//  Created by shenhf on 13-11-22.
//  Copyright (c) 2013年 shenhf. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
