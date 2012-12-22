//
//  RootViewController.h
//  27C3
//
//  Created by Philip Brechler on 08.12.10.
//  Copyright 2010 TimeCoast Communications. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Fahrplan28C3AppDelegate, EventDetailView;

@interface RootViewController : UITableViewController <UIAlertViewDelegate, UISearchBarDelegate> {
	
	Fahrplan28C3AppDelegate *appDelegate;
	EventDetailView *edvController;
	
	NSMutableArray *firstDayArray;
	NSMutableArray *secondDayArray;
	NSMutableArray *thirdDayArray;
	NSMutableArray *fourthDayArray;
    NSMutableArray *firstDayAfterMidnightArray;
	NSMutableArray *secondDayAfterMidnightArray;
	NSMutableArray *thirdDayAfterMidnightArray;
	NSMutableArray *fourthDayAfterMidnightArray;
    
    NSMutableArray *searchAllEvents;
    IBOutlet UISearchBar *searchBar;
    BOOL searching;
    BOOL letUserSelectRow;
    
    UIActivityIndicatorView *loadingIndicator;
}

@property (nonatomic,retain) NSMutableArray *firstDayArray;
@property (nonatomic,retain) NSMutableArray *secondDayArray;
@property (nonatomic,retain) NSMutableArray *thirdDayArray;
@property (nonatomic,retain) NSMutableArray *fourthDayArray;
@property (nonatomic,retain) NSMutableArray *firstDayAfterMidnightArray;
@property (nonatomic,retain) NSMutableArray *secondDayAfterMidnightArray;
@property (nonatomic,retain) NSMutableArray *thirdDayAfterMidnightArray;
@property (nonatomic,retain) NSMutableArray *fourthDayAfterMidnightArray;

- (void)organizeTheData;
- (BOOL)isSameDay:(NSDate*)date1 to:(NSDate*)date2;
- (void)reloadTheXML;

- (void) searchTableView;
- (void) doneSearching_Clicked:(id)sender;

@end
