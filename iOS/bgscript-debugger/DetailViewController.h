//
//  DetailViewController.h
//  bgscript-debugger
//
//  Created by Suresh Joshi on 15-03-21.
//  Copyright (c) 2015 Robot Pajamas. All rights reserved.
//


#import <UIKit/UIKit.h>


@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
