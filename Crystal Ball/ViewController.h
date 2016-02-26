//
//  ViewController.h
//  Crystal Ball
//
//  Created by Ryan Lijewski on 8/15/13.
//  Copyright (c) 2013 Ryan Lijewski. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
}



@property (strong, nonatomic) IBOutlet UILabel *predictionLabel;
@property (strong, nonatomic) NSArray *predictionArray;
@property (strong, nonatomic) UIImageView *imageView;

- (void) makePrediction;

@end
