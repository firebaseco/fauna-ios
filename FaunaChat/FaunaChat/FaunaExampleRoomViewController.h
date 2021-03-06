//
//  FaunaExampleRoomViewController.h
//  FaunaChat
//
//  Created by Johan Hernandez on 12/27/12.
//  Copyright (c) 2012 Fauna. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Fauna/Fauna.h>

@interface FaunaExampleRoomViewController : UITableViewController

@property (nonatomic, strong) NSString* timelineResource;
@property (nonatomic, strong) FaunaResponse* currentTimelineResponse;
@property (nonatomic, strong) NSDictionary* currentPage;
@property (nonatomic, strong) NSMutableArray* events;

- (void)reloadTimeline;

@end
