208120637
=========

南京工程学院电子信息工程121杨烜的Github仓库
h4, h5, h6,
h1, h2, h3 {margin-top: 0;}
ul, ol {margin: 0;}
p {margin: 0;}
html, body{
   font-family: 'PT Sans Caption', sans-serif;
   font-size: 100%;
   background:#fff; 
}
body a{
	transition:0.5s all;
	-webkit-transition:0.5s all;
	-moz-transition:0.5s all;
	-o-transition:0.5s all;
	-ms-transition:0.5s all;
}
/*-----start-header----*/
.header{
	background: url(../images/2.jpg)no-repeat center top;
	background-size: 100% 100%;
	-webkit-background-size: cover;
	-moz-background-size: cover;
	-o-background-size: cover;
	background-size: cover;
	background-position: center;
	position:relative;
}
.header_top {
	margin-top: 2em;
}
.logo{
	float:left;
}
.menu{
	 float:right;
	 margin-top:10px;
}
.menu li{
	display:inline-block;
}
 .menu li:first-child{
   	margin-left:0;
}
.menu li a{
  	display: block;
	font-size:0.85em;
	color:#fff;
	-webkit-transition: all 0.3s ease;
	-moz-transition: all 0.3s ease;
	-o-transition: all 0.3s ease;
	transition: all 0.3s ease;
	text-transform: uppercase;
	padding:10px;
}
#nav .current a {
    color:#F0D4A8;
   -webkit-transition: all 0.3s ease;
	-moz-transition: all 0.3s ease;
	-o-transition: all 0.3s ease;
	transition: all 0.3s ease;
}
.menu li a:hover ,.menu li.active a{
	color:#F0D4A8;
} 
.toggleMenu {
	display:  none;
   	padding:4px 5px 0px 5px;
    border-radius:2em; 
    -webkit-border-radius:2em;
    -moz-border-radius:2em;
    -o-border-radius:2em; 
}
.nav:before,
.nav:after {
    content: " "; 
    display: table; 
}
.nav:after {
    clear: both;
}
.nav ul {
    list-style: none;
}
@media screen and (max-width:800px) {
	.menu {
		margin:10px 0;
	}
    .active {
        display: block;
    }
    .menu li a{
    	text-align:left;
    	border-radius:0;
    	-webkit-border-radius:0;
    	-moz-border-radius:0;
    	-o-border-radius:0;
    }
    .nav {
	     list-style: none;
	     *zoom: 1;
	     width:95%;
		 position: absolute;
		 right:23px;
		 background:#051619;
		 top:88px;
		 z-index: 9999;
		 border:1px solid #eee;
    }
   .menu li a span.messages{
    	text-align:center;
    	top:15px;
    }
    .nav li ul{
    	width:100%;   	
    }
    .menu ul{
    	margin:0;
    }
    .nav > li.hover > ul {
        width:100%;
    }
    .nav > li {
        float: none;
        display:block;
    }
   
