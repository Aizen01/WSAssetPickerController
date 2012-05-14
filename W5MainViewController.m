//
//  W5MainViewController.m
//  W5AssetPickerController
//
//  Created by Wesley Smith on 5/12/12.
//  Copyright (c) 2012 Wesley D. Smith. All rights reserved.
//

#import "W5MainViewController.h"
#import "W5AssetPickerController.h"

@interface W5MainViewController () <W5AssetPickerControllerDelegate, UINavigationControllerDelegate>

@end


@implementation W5MainViewController

- (IBAction)pick:(id)sender 
{
    W5AssetPickerController *assetPickerController = [[W5AssetPickerController alloc] initWithDelegate:self];
    
    [self presentViewController:assetPickerController animated:YES completion:^{
        DLog(@"Asset picker appeared.");
    }];
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    return (interfaceOrientation == UIInterfaceOrientationPortrait);
}

@end
