<?php 

$page = $_REQUEST['page'];
switch($page)
{
	case "home":
		$page_to_include = "home";
		$page_title = "トップページ";
		break;

	case "about":
		$page_to_include = "about";
		$page_title = "事業内容";
		break;
	case "gaiyou":
		$page_to_include = "gaiyou";

	case "recrute":
		$page_to_include = "recrute";
		$page_title = "採用活動";
		break;

		$page_title = "会社概要";
		break;

	case "experience":
		$page_to_include = "experience";
		$page_title = "実績";
		break;

	case "contact":
		$page_to_include = "contact";
		$page_title = "お問い合わせ";
		break;

	default:
		$page_to_include = "home";
		$page_title = "トップページ";

}

$page_to_include = $page_to_include . ".php";

?>



<!DOCTYPE html>
<html>
<head>
<meta charset="utf-8">
<title>株式会社アットマークソリューション | <?php echo $page_title ; ?></title>
<link rel="stylesheet" type="text/css" href="style/style.css">
</head>
<body>

<header>
	<div id="lang">
		<div class="flag Japan">
			<div><img src="img/japan_flag.png"></div>
			<a href="#">Japanese</a>
		</div>
		<div class="flag UK">
			<div><img src="img/uk-flag.png"></div>
			<a href="#">English</a>
		</div>
		<div class="flag France">
			<div><img src="img/france-flag.png"></div>
			<a href="#">French</a>
		</div>
		<div class="flag China">
			<div><img src="img/china-flag.png"></div>
			<a href="#">Chinese</a>
		</div>

	</div>

<nav>
	<a href="index.php?page=home">HOME</a>
	<a href="index.php?page=about">事業内容</a>
	<a href="index.php?page=recrute">採用情報</a>
	<a href="index.php?page=gaiyou">会社概要</a>
	<a href="index.php?page=experience">実　績</a>
	<a href="index.php?page=contact">お問い合わせ</a>
</nav>

</header>

<?php include($page_to_include); ?>



</body>
</html>