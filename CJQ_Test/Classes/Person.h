//
//  Person.h
//  CJQKVO封装
//
//  Created by cjq on 2018/12/15.
//  Copyright © 2018 cjq. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Person : NSObject

@property (nonatomic,strong)NSString *name;
@property (nonatomic,strong)NSString *age;
@property (nonatomic,strong)NSString *number;
@property (nonatomic,strong)NSMutableArray *arr;

@end

NS_ASSUME_NONNULL_END
