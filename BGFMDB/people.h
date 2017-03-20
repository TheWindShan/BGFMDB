//
//  people.h
//  BGFMDB
//
//  Created by huangzhibiao on 16/9/27.
//  Copyright © 2016年 Biao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
//添加该头文件,本类就具有了存储功能.
#import "NSObject+BGModel.h"

@interface Human : NSObject

@property(nonatomic,copy)NSString* sex;
@property(nonatomic,copy)NSString* body;
@property(nonatomic,assign)NSInteger humanAge;

@end

@interface Student : NSObject

@property(nonatomic,copy)NSString* num;
@property(nonatomic,strong)NSArray* names;
@property(nonatomic,strong)Human* human;

@end

@interface User : NSObject

@property(nonatomic,copy)NSString* name;
@property(nonatomic,strong)NSDictionary* attri;
@property(nonatomic,assign)float userAge;
@property(nonatomic,strong)NSNumber* userNumer;
@property(nonatomic,strong)Student* student;//第二层类嵌套 , 可以无穷嵌套...

@end

@interface People : NSObject
{
    @public
    int testAge;
    NSString* testName;
}


@property(nonatomic,copy)NSString* name;
@property(nonatomic,strong)NSNumber* num;
@property(nonatomic,assign)int age;
//@property(nonatomic,copy)NSString* sex;
@property(nonatomic,copy)NSString* eye;
@property(nonatomic,copy)NSString* sex_old;
@property(nonatomic,strong)NSArray* stud;
@property(nonatomic,strong)NSDictionary* info;
@property(nonatomic,strong)User* user;//第一层类嵌套
@property(nonatomic,strong)User* user1;

@property(nonatomic,assign)int bint;
@property(nonatomic,assign)short bshort;
@property(nonatomic,assign)signed bsigned;
@property(nonatomic,assign)long long blonglong;
@property(nonatomic,assign)unsigned bunsigned;
@property(nonatomic,assign)float bfloat;
@property(nonatomic,assign)double bdouble;
@property(nonatomic,assign)CGFloat bCGFloat;
@property(nonatomic,assign)NSInteger bNSInteger;
@property(nonatomic,assign)long blong;
@property(nonatomic,assign)BOOL addBool;

@property(nonatomic,assign)CGRect rect;
@property(nonatomic,assign)CGPoint point;
@property(nonatomic,assign)CGSize size;
@property(nonatomic,assign)NSRange range;

@property(nonatomic,strong)NSMutableArray* arrM;
@property(nonatomic,strong)NSMutableDictionary* dictM;
@property(nonatomic,strong)NSSet* nsset;
@property(nonatomic,strong)NSMutableSet* setM;
@property(nonatomic,strong)NSMapTable* mapTable;
@property(nonatomic,strong)NSHashTable* hashTable;

@property(nonatomic,strong)NSDate* date;
@property(nonatomic,strong)NSData* data2;
//@property(nonatomic,strong)NSMutableData* dataM;
@property(nonatomic,strong)UIImage* image;
@property(nonatomic,strong)UIColor* color;

@property(nonatomic,strong)NSURL* Url;
@end

@interface Man : NSObject

@property(nonatomic,copy)NSString* Man_name;
@property(nonatomic,strong)NSNumber* Man_num;
@property(nonatomic,assign)int Man_age;
@property(nonatomic,strong)UIImage* image;

@end
