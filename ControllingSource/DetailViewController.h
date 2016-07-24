//
//  DetailViewController.h
//  ControllingSource
//
//  Created by Naufal Aros El Morabet on 24/07/16.
//  Copyright © 2016 Naufal Aros. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

