//
//  MasterViewController.h
//  bgscript-debugger
//
//  Created by Suresh Joshi on 15-03-21.
//  Copyright (c) 2015 Robot Pajamas. All rights reserved.
//


#import <UIKit/UIKit.h>


@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;


@end
