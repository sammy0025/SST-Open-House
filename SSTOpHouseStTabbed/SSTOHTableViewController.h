//
//  SSTOHTableViewController.h
//  SSTOpHouseStTabbed
//
//  Created by Pan Ziyue on 11/5/13.
//  Copyright (c) 2013 Pan Ziyue. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SSTOHTableViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource>

@property (strong, nonatomic) NSMutableArray *firstSection;

@end